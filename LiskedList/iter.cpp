#include <iostream>
using namespace std;

template <class T>
class Linkedlist;

template <class T>
class Nodo;

template <class T>
class Nodo{
    private:
        friend class Linkedlist<T>;
        Nodo<T>* next;
        T data;
    public:
        Nodo(){next=NULL;}
        Nodo(const T _data){data=_data; next=NULL;}
        void getData(){return data;}
        void setData(T newData){data=newData;}
};

template <class T>
class Linkedlist{
        Nodo<T>* head;
        int size;
    public:
        Linkedlist(){
            head=NULL;
            size=0;
        }

        void insert(T data){
            Nodo<T>* newNodo=new Nodo<T>;
            newNodo->data=data;
            Nodo<T>* aux1;
            Nodo<T>* aux2;
            aux1=head;
            while(aux1&&aux1->data<data){
                aux2=aux1;
                aux1=aux1->next;
            }
            if(head==aux1)
                head=newNodo;
            else
            {
                aux2->next=newNodo;
            }
            newNodo->next=aux1;
            size++;
        }

        int search(T data){
            int pos=0;
            Nodo<T>* aux1=head;
            while(aux1->data!=data){
                aux1=aux1->next;
                pos++;
                if(!aux1)
                    break;
            }
            return ++pos;
        }

        void remove(T data){
            Nodo<T>* aux1=head;
            Nodo<T>* aux2=NULL;
            while(aux1->data!=data){
                aux2=aux1;
                aux1=aux1->next;
                if(!aux1)
                    break;
            }
            if(!aux2){
                head=aux1->next;
                delete aux1;
                size--;
                return;
            }
                
            if(aux1){
                aux2->next=aux1->next;
                delete aux1;
                size--;
            }
        }

        void printlist(){
            Nodo<T>* aux1=head;
            while(aux1){
                cout<<aux1->data<<" ";
                aux1=aux1->next;
            }
            cout<<endl;
        }

        int getSize(){
            return size;
        }
        
        class iterator{
            	Nodo<T>* pos;
            public:
	            iterator(Nodo<T>*_pos=NULL) { pos=_pos;}
	
	            T& operator*(){ 
	                return pos->data; 
	            }
	 
				bool operator!=(const iterator& it){ 
	                return pos != it.pos; 
	            }
	 
				iterator operator++(int){ 
	                pos = pos->next; 
	                return *this; 
	            }
	
	            iterator& operator=(iterator a){
	                this->pos=a.pos;
	                return *this;
	            }
	
	            iterator operator+(int a){
	                iterator temp;
	                temp.pos=this->pos;
	                for(int i=0;i<a;i++){
	                    temp.pos=temp.pos->next;
	                }
	                return temp;
	            }
	
	            iterator& operator+=(int a){
	                for(int i=0;i<a;i++){
	                    this->pos=this->pos->next;
	                }
	                return *this;
	            }
        };
        
        const iterator begin() const {
            return iterator(head);
        }

        const iterator end() const {
            return iterator(NULL);
        }

        ~Linkedlist(){
            Nodo<T>* aux1=head;
            Nodo<T>* aux2;
            while(aux1){
                aux2=aux1->next;
                delete aux1;
                aux1=aux2;
            }
        }
};


int main(){
    Linkedlist<int> lista;
    lista.insert(1);
    lista.insert(2);
    lista.insert(3);
    lista.insert(4);
    lista.printlist();
    
    for (Linkedlist<int> ::iterator b=lista.begin();b!=lista.end();b++){
        cout<<*b<<" ";
    }
    
    
    return 0;
}
