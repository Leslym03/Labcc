#include <iostream>
using namespace std;

template <class T>
class Stack;

template <class T>
class Nodo{
    private:
        friend class Stack<T>;
        Nodo<T>* next;
        T data;
    public:
        Nodo(){next=NULL;}
        Nodo(const T _data){data=_data; next=NULL;}
        void getData(){return data;}
        void setData(T newData){data=newData;}
};

template <class T>
class Stack{
        Nodo<T>* first;
        Nodo<T>* last;
        int size;
    public:
        Stack(){
            first=NULL;
            last=NULL;
            size=0;
        }

        void push(T _data){
            Nodo<T>* newNodo=new Nodo<T>;
            newNodo->data=_data;
            Nodo<T>* aux1;
            Nodo<T>* aux2;
            aux1=first;
            while(aux1&&aux1->data<_data){
                aux2=aux1;
                aux1=aux1->next;
            }
            if(first==aux1)
                first=newNodo;
                
            else{
                aux2->next=newNodo;
            }
            newNodo->next=aux1;
            last=newNodo;
            size++;
        }

        void pop(){
        	Nodo<T>* aux1=first;
            Nodo<T>* aux2=aux1;
            if(!first)
                return;
            else if(!(first->next)){
                delete aux1;
            }else{
                while(aux1->next){
                    aux2=aux1;
                    aux1=aux1->next;
                }
                delete aux1;
                aux2->next=NULL;
            }
            size--;
        }
        
        T top(){
        	Nodo<T>* aux1=first;
			Nodo<T>* aux2;
			
			if(aux1->next!=NULL){
				while(aux1->next!=last){
                aux1=aux1->next;
            	}
	            aux2=last;
	            last=aux1;
	            return aux2->data;
			}
			else{
				return aux1->data;
			}
        	
            
        }

        int Size(){
            return size;
        }
        
        bool empty(){
        	return !size;
        }

		class iterator{
            Nodo<T>* pos;
        public:
            iterator(Nodo<T>*_pos=NULL) : pos(_pos){}

            T& operator*(){ 
                return pos->data; 
            }
 
			bool operator!=(const iterator& it){ 
                return this->pos != it.pos; 
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

		const iterator begin(){
            return iterator(first);
        }

        const iterator end(){
            return iterator(NULL);
        }
        
        ~Stack(){
            Nodo<T>* aux1=first;
            Nodo<T>* aux2;
            while(aux1){
                aux2=aux1->next;
                delete aux1;
                aux1=aux2;
            }
        }
};

int main(){
    
    cout << "Stack"<<endl;
    Stack<int> pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);
    pila.push(4);
    
    
    for(Stack<int>::iterator i=pila.begin();i!=pila.end();i++)
        cout << *i <<" ";
    cout <<endl;
    
    while (!pila.empty()) { 
        cout << pila.top() << " "; 
        pila.pop(); 
    } 
    
    cout<<endl;
    cout << pila.Size()<<endl;
    return 0;
}
