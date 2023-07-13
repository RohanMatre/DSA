// Creating an empty queue
#include <bits/stdc++.h>
using namespace std;

// A structure to represent a queue
class Queue {
public:
	int front, rear,size;
	int* arr;

	public:
	Queue(int s){
		front=rear-1;
		size=s;
		arr=new int[s];
	}

	void enQueue(int value);
	int deQueue();
	void displayQueue();
};

void Queue::enQueue(int value){
	if((front == 0 && rear==size-1)  || (rear==(front-1)%(size-1))){
		cout<<"Queue is Full!"<<endl;
		return ;
	}
	else if(front==-1){
		front=rear=0;
		arr[rear]=value;
	}
	else if(rear==size-1 && front!=0){
		rear=0;
		arr[rear]=value;
	}
	else{
		rear++;
		arr[rear]=value;
	}
}
	int Queue::deQueue(){
		if(front == -1){
			cout<<"Queue is Empty"<<endl;
			return INT_MIN;
		}
		int data=arr[front];
		arr[front]=-1;
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else if(front==size-1){
			front=0;
		}
		else{
			front++;
		}
		return data;
	}

	void Queue::displayQueue(){
		if(front==-1){
			cout<<"Queue is Empty!"<<endl;
			return;
		}
		cout<<"Elements in Circular Queue are: "<<endl;
		if(rear>=front)
		{
			for(int i=front;i<=rear;i++){
				cout<<arr[i]<<endl;
			}
		}
			else
			{
				for(int i=front;i<size;i++){
					cout<<arr[i]<<endl;
				}
				for(int i=0;i<=rear;i++){
					cout<<arr[i]<<endl;
				}
			}

		}
	int main(){
		Queue q(5);

		q.enQueue(14);
		q.enQueue(22);		
		q.enQueue(13);		
		q.enQueue(-6);		
		q.enQueue(4);

		q.displayQueue();
		 printf("Deleted value = %d",q.deQueue());
		 cout<<endl;
        printf("Deleted value = %d",q.deQueue());
        cout<<endl;
        q.displayQueue();
        
        q.enQueue(13);		
		q.enQueue(-6);	
		 q.displayQueue();
		 q.enQueue(-6);
		 q.displayQueue();
	}


