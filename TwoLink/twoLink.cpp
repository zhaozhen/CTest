
void inserFist(int key,int data){
	struct node *link=(struct node*) malloc(sizeof (struct node));
	link->key=key;
	link->data=data;

	if(isEmpty()){
		last=link;
	}else{
		head->prev=link;
	}
	link->next=head;
	head=link;
}

//delte fist elemet
struct node* deletFist(){

	struct node* tempLink=head;
	if(head->next==NULL){
		last=NULL;
	}else{
		head->next->prev=NULL;
	}

	head=head->next;

	return tempLink;
}

// 双向链表，在一百教程中没有找到综合实例，所以不能运行