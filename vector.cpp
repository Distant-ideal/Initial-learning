/*************************************************************************
	> File Name: vector.cpp
	> Author: gongpixi
	> Mail: 1371854096@qq.com
	> Created Time: 2019年03月17日 星期日 18时07分58秒
 ************************************************************************/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

namespace my {
    template<typename T>
    class vector {
    public :
        vector() {
            this->data = new T[10];
            this->size = 10;
            cout << "constructor " << this << endl;
        }
        vector(const vector<T> &arr) : data(nullptr), size(0) {
            cout << "copy constructor" << endl;
            if(this->data) {
                delete[] this->data;
            }
            //cout << "end1" << endl;
            this->data = new T[arr.size];
            //cout << "end2" << endl;
            this->size = arr.size;
            for(int i = 0; i < this->size; i++) {
                new(this->data + i) T(arr.data[i]);
                //new T(arr.data[i]);
            }
            //memcpy(this->data, arr.data, sizeof(T) * this->size);
            //cout << "end" << endl;
        }
        vector(vector<T> &&arr) {
            cout << "move constructor" << endl;
            this->data = arr.data;
            this->size = arr.size;
            arr.data = nullptr;
            arr.size = 0;
        }

        T &operator[](int ind) {
            return this->data[ind];
        }

    private :
        T *data;
        int size;
    };

    vector<int> func(vector<int> *p = nullptr) {
        vector<int> temp;
        temp[4] = 5678;
        return temp;
    }
    
    class A {
        public :
        virtual void test(int x) {
            cout << "bye bye" << endl;
        }
        void test1() {
            cout << "bye bye" << endl;
        }
    };
    class B : public A {
        public :
        virtual void test(int x) {
            cout << "my name is class B" << endl;
            cout << this << endl;
            cout << x << endl;
        }
        void test1() {
            cout << "my name is class B" << endl;
        }
    };

    typedef void(*FUNC)(void *, int x);
    
    void print(int &a) {
        cout << "print left value " << a << endl;
    }

    void print(int &&a) {
        cout << "print right value " << a << endl;
    }

    int value_type(int &a) {
        cout << "left value " << a << endl;
        print(a);
        return 1;
    }
    
    int value_type(int &&a) {
        cout << "right value " << a << endl;
        print(std::move(a)); //强制把a变为右值
        return 1;
    }

    int test() {
        vector<int> a;
        vector<int> c(std::move(a));
        string aa = "hello";
        string bb = "world";
        string cc = "!";
        string dd;
        dd = aa +  bb + cc;
/*      int a = 9973;
        int &b = a;
        value_type(a);
        value_type(3 + 5);
*/
/*      B b;
        A *p = &b;
        b.test(5);
        ((FUNC**)(&b))[0][0](&b,5);
        vector<int>d(func());
        cout << &d << endl;
        cout << d[4] << endl;
*/
        //cout << &b << endl;
/*      b.test();
        b.test1();
        p->test();
        p->test1();
*/
        
/*      //my::vector<int> *p =  nullptr;
        //delete p;
        my::vector<my::vector<int>> a;
        for(int i = 0; i < 5; i++)  {
            a[i] = i;
        }
        a[5][5] = 16384;
        my::vector<my::vector<int>>c(a);
*/
/*        //for(int i = 0; i < 5; i++) cout << c[i] << endl;
        cout << (c[5][5] == a[5][5]) << endl;
        c[5][5] = 16;
        //cout << c[5][5] << a[5][5] << endl;
        cout << (c[5][5] != a[5][5]) << endl;
*/
        return 0;
    }
}

int main() {
/*  //my::vector<int> *p =  nullptr;
    //delete p;
    my::vector<my::vector<int>> a;
    for(int i = 0; i < 5; i++)  {
        a[i] = i;
    }
    a[5][5] = 16384;
    my::vector<my::vector<int>>c(a);
    //for(int i = 0; i < 5; i++) cout << c[i] << endl;
    cout << (c[5][5] == a[5][5]) << endl;
    c[5][5] = 16;
    //cout << c[5][5] << a[5][5] << endl;
    cout << (c[5][5] != a[5][5]) << endl;
*/
    my::test();
    return 0;
}
