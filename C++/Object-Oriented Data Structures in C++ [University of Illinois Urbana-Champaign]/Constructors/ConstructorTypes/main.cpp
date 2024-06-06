#include <iostream>
using namespace std;

class User
{
public:
    int *age;
    string *name;

    ~User()
    {
        delete age;
        delete name;
    };

    User(const User &obj)
    {
        age = new int(*obj.age);
        name = new string(*obj.name);
    };

    User &operator=(const User &obj)
    {
        age = obj.age;
        name = obj.name;
        return *this;
    };

    User(string personName, int personAge)
    {
        age = new int(personAge);
        name = new string(personName);
    };
};

int main()
{
    User user = User("Renan", 25);
    cout << "User Created! " << "Name: " << *(user).name << " " << "Age: " << *(user).age << endl;

    User copiedUser = User(user);
    cout << "User Copied! " << "Name: " << *(user).name << " " << "Age: " << *(user).age << endl;

    User userToUpdate = User("Renan Gomes", 25);
    user = userToUpdate;
    cout << "User Updated! " << "Name: " << *(user).name << " " << "Age: " << *(user).age << endl;

    User *userToDelete = new User("Renan", 25);
    delete userToDelete;
    cout << "User Deleted! " << endl;

    return 0;
}