今天的操作全部错误的删除了，明天再继续搞，也没有带鼠标
//today is back
void insertFist(int key,int data){
	struct node* link=(struct node*)malloc(struct node);
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
//delete operation
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

void insertLast(int key,int data){
	struct node* link=(struct node*)malloc(struct node);

	link->key=key;
	link->data=data;

	if(isEmpty()){
		last=link;
	}else{
		last->next=link;
		link->prev=last;
	}
	last=link;

}



