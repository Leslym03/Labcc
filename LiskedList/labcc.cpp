#include <iostream>
using namespace std;

template <class T>
class Linkedlist;

template <class T>
class Nodo{
    private:
        friend class Linkedlist<T>;
        Nodo<T>* next;
        T data;
    public:
        Nodo(){
            next=NULL;
        }
        void getData(){
        	return data;
        }
        void setData(T newData){
        	data=newData;
        }
        
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
    cout << "Nodos" << endl;
    lista.insert(1);
    lista.insert(2);
    lista.insert(3);
    lista.insert(4);
    lista.printlist();
    
    cout <<lista.search(2)<<endl;
    
    lista.remove(1);
    lista.remove(3);
    lista.printlist();

    cout <<"Size = "<< lista.getSize()<<endl;
    
    return 0;
}
