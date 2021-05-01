
class Animal
{
protected:
    Animal() {}
};

class Dog : public Animal
{
public:
    Dog() {} // Dog() : Animal() {}
};

int main()
{
    Animal a;   // error
    Dog    d;   // ok.
}
/*
생성자 protect : 상속 받아서만 사용가능
소멸자 protect : heap 에만 생성 가능, 소멸자 역할 destroy()
*/
