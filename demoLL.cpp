#include"LinkedList.cpp"
int main(){
	//INTEGER DATA TYPE
	LinkedList<int>myLinked;
	myLinked.createLL();
	myLinked.display();
	int key1;
	cout<<"Enter the data to be inserted at front:";
	cin>>key1;
	myLinked.insert_at_front(key1);
	myLinked.display();
	int key2;
	cout<<"Enter the data to be inserted at end:";
	cin>>key2;
	myLinked.insert_at_end(key2);
	myLinked.display();
	int key3,item1;
	cout<<"Enter the data after which the item to be inserted:";
	cin>>key3;
	cout<<"Enter the data to be inserted after "<<key3<<":";
	cin>>item1;
	myLinked.insert_after_key(key3,item1);
	myLinked.display();
	int key4,item2;
	cout<<"Enter the data before which the item to be inserted:";
	cin>>key4;
	cout<<"Enter the data to be inserted before"<<key4<<":";
	cin>>item2;
	myLinked.insert_before_key(key4,item2);
	myLinked.display();
	cout<<"After deletion from front:\n";
	myLinked.delete_from_front();
	myLinked.display();
	cout<<"After delete at end:\n";
	myLinked.delete_from_end();
	myLinked.display();
	int key5;
	cout<<"Enter the key to delete:";
	cin>>key5;
	myLinked.delete_key(key5);
	myLinked.display();
	cout<<"After Reverse Traversal:\n";
	myLinked.reverse_traversal();
	cout<<endl;
	LinkedList <int> myLinked2;
	myLinked2.createLL();
	myLinked.concatenation(myLinked2);
	cout<<"After concatenation:\n";
	myLinked.display();
	cout<<endl;
	int key6;
	cout<<"Enter the data to search:";
	cin>>key6;
	myLinked.searching(key6);
	cout<<"After reversing:\n";
	myLinked.reverse();
	myLinked.display();
	cout<<"After sorting: \n";
	myLinked.sorting();
	myLinked.display();
	return 0;
}