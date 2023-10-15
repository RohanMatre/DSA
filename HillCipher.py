import numpy as np

def validate_key(key_matrix):
    # Check if the key matrix is square and has a non-zero determinant
    if key_matrix.shape[0] != key_matrix.shape[1]:
        return False
    if np.linalg.det(key_matrix) == 0:
        return False
    return True

def encrypt(plain_text, key_matrix):
    # Ensure the length of the plain text is a multiple of the key matrix size
    key_size = key_matrix.shape[0]
    padding = (key_size - len(plain_text) % key_size) % key_size
    plain_text += 'X' * padding  # Pad with 'X' characters if necessary

    # Convert plain text to numbers (A=0, B=1, ..., Z=25)
    plain_text_numbers = [ord(char) - ord('A') for char in plain_text]

    # Split the plain text numbers into blocks of size key_size
    blocks = [plain_text_numbers[i:i+key_size] for i in range(0, len(plain_text_numbers), key_size)]

    # Encrypt each block using the key matrix
    cipher_blocks = []
    for block in blocks:
        cipher_block = np.dot(key_matrix, block) % 26
        cipher_blocks.append(cipher_block)

    # Convert the cipher block numbers back to characters
    cipher_text = ''.join([chr(num + ord('A')) for block in cipher_blocks for num in block])

    return cipher_text

def decrypt(cipher_text, key_matrix):
    # Convert cipher text to numbers (A=0, B=1, ..., Z=25)
    cipher_text_numbers = [ord(char) - ord('A') for char in cipher_text]

    # Split the cipher text numbers into blocks of size key_size
    key_size = key_matrix.shape[0]
    blocks = [cipher_text_numbers[i:i+key_size] for i in range(0, len(cipher_text_numbers), key_size)]

    # Calculate the inverse of the key matrix
    key_matrix_inv = np.linalg.inv(key_matrix)

    # Decrypt each block using the inverse key matrix
    plain_blocks = []
    for block in blocks:
        plain_block = np.dot(key_matrix_inv, block) % 26
        plain_blocks.append(plain_block.astype(int))  # Convert to integers

    # Convert the plain block numbers back to characters
    plain_text = ''.join([chr(num + ord('A')) for block in plain_blocks for num in block])

    return plain_text


if __name__ == "__main__":
    while True:
        print("Options:")
        print("1. Encryption")
        print("2. Decryption")
        print("3. Exit")

        choice = int(input("Enter your choice: "))

        if choice == 1:
            plain_text = input("Plain Text: ").upper().replace(" ", "")
            key_size = int(input("Enter the key matrix size (e.g., 2 for 2x2, 3 for 3x3): "))

            key_matrix = np.zeros((key_size, key_size), dtype=int)
            print(f"Enter {key_size**2} values for the key matrix:")

            for i in range(key_size):
                for j in range(key_size):
                    key_matrix[i][j] = int(input(f"Row {i+1}, Column {j+1}: "))

            if not validate_key(key_matrix):
                print("Invalid key matrix. Please ensure it is square and has a non-zero determinant.")
                continue

            cipher_text = encrypt(plain_text, key_matrix)
            print("Cipher Text:", cipher_text)

        elif choice == 2:
            cipher_text = input("Cipher Text: ").upper().replace(" ", "")
            key_size = int(input("Enter the key matrix size (e.g., 2 for 2x2, 3 for 3x3): "))

            key_matrix = np.zeros((key_size, key_size), dtype=int)
            print(f"Enter {key_size**2} values for the key matrix:")

            for i in range(key_size):
                for j in range(key_size):
                    key_matrix[i][j] = int(input(f"Row {i+1}, Column {j+1}: "))

            if not validate_key(key_matrix):
                print("Invalid key matrix. Please ensure it is square and has a non-zero determinant.")
                continue

            plain_text = decrypt(cipher_text, key_matrix)
            print("Decrypted Plain Text:", plain_text)

        elif choice == 3:
            break

        else:
            print("Invalid choice. Please select a valid option.")
