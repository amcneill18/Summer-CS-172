//Andrew McNeill
//CS 172
//EX03

//EX03_01

//#include <iostream>
//using namespace std;
//
//class Fan {
//public:
//PT -- Don't make these public. Use accessor and mutator functions instead
//16/20
//    int speed;
//    bool on;
//    double wingRadius;
//    Fan() {
//        speed = 1;
//        on = false;
//        wingRadius = 5;
//    }
//    Fan(int s, bool o, double r)
//        {
//            speed = s;
//            on = o;
//            wingRadius = r;
//        }
//    
//
//};
//int main() {
//    Fan fan1(3, true, 5);
//    Fan fan2(2, false, 10);
//
//    cout << "Fan 1 speed: " << fan1.speed << endl;
//    cout << "Fan 1 on: " << fan1.on << endl;
//    cout << "Fan 1 radius: " << fan1.wingRadius << endl;
//
//    cout << "Fan 2 speed: " << fan2.speed << endl;
//    cout << "Fan 2 on: " << fan2.on << endl;
//    cout << "Fan 2 radius: " << fan2.wingRadius << endl;
//}
//
////UML for EX03_01
////Class -
//// Fan
////Properties -
//// int speed;
//// bool on;
//// double wingRadius;
////Behaviours
//// fan()

//EX03_02
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class QuadraticEquation {
//private:
//    double a;
//    double b;
//    double c;
//
//public:
//    QuadraticEquation(double a, double b, double c)
//    {
//        a = a;
//        b = b;
//        c = c;
//    }
//    double getDiscriminant()
//    {
//        return (b*b) - (4 * a*c);
//    }
//
//    double getRoot1()
//    {
//        double discriminant = getDiscriminant();
//        if (discriminant < 0)
//            return 0;
//        else
//            return (-b - sqrt(discriminant)) / (2 * a);
//    }
//
//    double getRoot2()
//    {
//        double discriminant = getDiscriminant();
//        if (discriminant < 0)
//            return 0;
//        else
//            return (-b + sqrt(discriminant)) / (2 * a);
//    }
//    double getA()
//    {
//        return a;
//    }
//    double getB()
//    {
//        return b;
//    }
//    double getC()
//    {
//        return c;
//    }
//};
//int main() {
//    double a, b, c, d;
//
//    cout << "Enter a: ";
//    cin >> a;
//    cout << "Enter b: ";
//    cin >> b;
//    cout << "Enter c: ";
//    cin >> c;
//
//    QuadraticEquation quad(a, b, c);
//
//    d = quad.getDiscriminant();
//
//    cout << "The given values " << endl;
//    cout << "The value of a: " << quad.getA() << endl;
//    cout << "The value of b: " << quad.getB() << endl;
//    cout << "The value of c: " << quad.getC() << endl;
//
//
//        if (d < 0)
//        {
//            cout << "The equation has no roots" << endl;
//        }
//
//
//        else if (d == 0)
//    {
//        cout << "The root is " << quad.getRoot1() << endl;
//    }
//
//        else
//    {
//        cout << "The roots are " << quad.getRoot1()    << " and " << quad.getRoot2() << endl;
//    }
//    return 0;
//
//}

//EX03_03
//
//#include <iostream>
//using namespace std;
//
//class EvenNumber {
//public:
//PT -- private value, not public
//PT -- 17/20
//    int value;
//    EvenNumber()
//    {
//        value = 0;
//    }
//    EvenNumber(int n)
//    {
//        value = n;
//    }
//    int getValue()
//    {
//        return value;
//    }
//    int getNext()
//    {
//        return value + 2;
//    }
//    int getPrevious()
//    {
//        return value - 2;
//    }
//};
//
//int main() {
//    EvenNumber number(16);
//    cout << "The even number is: " << number.getValue() << endl;
//    cout << "The next even number is: " << number.getNext() << endl;
//    cout << "The previous even number is: " << number.getPrevious() << endl;
//}

//EX03_04

//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//string sort(string& s);
//int main(){
//    string s;
//    cout << "Enter a string: ";
//    getline(cin, s);
//    sort(s);
//    cout << "The sorted string is: " << s << endl;
//    }
//
//    string sort(string& s)
//
//    {
//PT -- this won't quite work. And I want you to implement sort, not simply call a built-in function
//PT -- 15/20
//        sort(s.begin(), s.end());
//        return s;
//    }

//EX03_05
// PT -- 18/20
//#include <iostream>
//#include <string>
//using namespace std;
//class MyInteger {
//public:
//    int value;
//    MyInteger() {
//        value = 0;
//    }
//    MyInteger(int n)
//    {
//        value = n;
//    }
//    const int getValue()
//    {
//        return value;
//    }
//    const bool isEven()
//    {
//        if (value % 2 == 0)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//    }
//    const bool isOdd()
//    {
//        if (value % 2 == 0)
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
//    const bool isPrime()
//    {
//        for (int factor = 2; factor <= value / 2; factor++) {
//            if (value % factor == 0)
//            {
//                return false;
//            }
//            else
//            {
//PT -- need to check all factors, and not just two (you're exiting the loop early)
//                return true;
//            }
//        }
//    }
//    static bool isEven(int value)
//    {
//        if (value % 2 == 0)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
//        
//
//    }
//    static bool isOdd(int value)
//    {
//        if (value % 2 == 0)
//        {
//            return false;
//        }
//        else
//        {
//            return true;
//        }
//    }
//    static bool isPrime(int value)
//    {
//        for (int factor = 2; factor <= value / 2; factor++) {
//            if (value % factor == 0)
//            {
//                return false;
//            }
//            else
//            {
//                return true;
//            }
//        }
//    }
//    static bool isEven(MyInteger myInt)
//    {
//        return myInt.isEven(myInt.getValue());
//    }
//
//    static bool isOdd(MyInteger myInt)
//    {
//        return myInt.isOdd(myInt.getValue());
//    }
//
//    static bool isPrime(MyInteger myInt)
//    {
//        return myInt.isPrime(myInt.getValue());
//    }
//
//    bool equals(int intValue)
//    {
//        return value == intValue;
//    }
//
//    bool equals(MyInteger myInt)
//    {
//        return equals(myInt.getValue());
//    }
//
//    int parseInt(string s) {
//
//        return (atoi(s.c_str()));
//
//    }
//    };
//
//
//int main() {
//    MyInteger intd1(11);
//    MyInteger intd2(32);
//    MyInteger intd3(41);
//
//    cout << "Values for the objects are" << endl;
//    cout << "Integer 1:" << intd1.getValue() << endl;
//    cout << "Integer 2:" << intd2.getValue() << endl;
//    cout << "Integer 3:" << intd3.getValue() << endl;
//    cout << "Is Integer 1 even: ";
//
//    bool x = intd1.isEven();
//    if (x == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//
//    cout << "Is Integer 2 odd: ";
//    bool y = intd2.isOdd();
//
//    if (y == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//
//    cout << "Is Integer 3 prime:  ";
//    bool z = intd3.isPrime();
//
//    if (z == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//
//    cout << "Even, odd or prime by integer:" << endl;
//    bool p = MyInteger::isEven(11);
//
//    if (p == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//
//    bool q = MyInteger::isOdd(32);
//
//    if (q == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//    bool r = MyInteger::isPrime(41);
//
//    if (r == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//    cout << "Even, odd or prime by passing integer as an argument." << endl;
//
//    bool s = MyInteger::isEven(intd2);
//
//    if (s == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//
//    bool t = MyInteger::isEven(intd1);
//
//    if (t == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//
//    bool u = MyInteger::isPrime(intd1);
//
//    if (u == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//    cout << "Checking if integer 1 equals the specified value (10):" << endl;
//
//    bool v = intd1.equals(10);
//
//    if (v == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//
//    cout << "Checking equality of integer 1 and integer 2: " << endl;
//    bool w = intd1.equals(intd2);
//
//    if (w == 1)
//    {
//        cout << "TRUE" << endl;
//    }
//    else
//    {
//        cout << "FALSE" << endl;
//    }
//
//    cout << "Converts string to integer value:" << endl;
//    cout << intd1.parseInt("word") << endl;
//
//    return 0;
//
//}
