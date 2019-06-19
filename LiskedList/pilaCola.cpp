#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Nodo;

template <class T>
class Stack;

template <class T>
class Cola;

template <class T>
class Nodo{
    private:
        friend class Stack<T>;
        friend class Cola<T>;
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
    private:
    Nodo<T>* first;
    int size;
    public:
        Stack(){
            first=NULL;
            size=0;
        }

        void push(T value){
            Nodo<T>* temp=new Nodo<T>;
            temp->data=value;
            Nodo<T>* aux1=first;
            if(!aux1){
                first=temp;
                size++;
            }else{
                while(aux1->next){
                    aux1=aux1->next;
                }
                aux1->next=temp;
                size++;
            }
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
           if(!(first->next)){
                return aux1->data;
            }else{
                while(aux1->next){
                    aux1=aux1->next;
                }
                return aux1->data;
            }
            
        }

        bool empty(){
            return (!size);
        }

        int Size(){
            return size;
        }
};

template <class T>
class Cola{
    private:
    Nodo<T>* first;
    int size;
    public:
        Cola(){
            first=NULL;
            size=0;
        }

        void push(T value){
            Nodo<T>* temp=new Nodo<T>;
            temp->data=value;
            Nodo<T>* aux1=first;
            if(!aux1){
                first=temp;
                size++;
            }else{
                while(aux1->next){
                    aux1=aux1->next;
                }
                aux1->next=temp;
                size++;
            }
        }

        void pop(){
            Nodo<T>* aux1=first;
            if(!first)
                return;
            else if(!(first->next)){
                delete aux1;
            }else{
                first=aux1->next;
                delete aux1;
            }
            size--;
        }

        T top(){
            return first->data;
        }

        bool empty(){
            return (!size);
        }

        int Size(){
            return size;
        }
};

int main(){
    cout << "Pila" << endl;
    Stack<int> pila;
    pila.push(9);
    pila.push(8);
    pila.push(3);

    while (!pila.empty()) { 
        cout << pila.top() << " "; 
        pila.pop(); 
    } 
    cout<<endl;
    
    cout << pila.Size()<<endl;

    cout << "Cola" << endl;
    Cola<int> cola;
    cola.push(5);
    cola.push(2);
    cola.push(8);

    while (!cola.empty()) { 
        cout << cola.top() << " "; 
        cola.pop(); 
    } 
    cout<<endl;
    
    cout << cola.Size()<<endl;

}
