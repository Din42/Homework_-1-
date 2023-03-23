#include <iostream>
using namespace std;


struct Fraction 
{
private:
  int chislitel;
  int znamenatel;

public:  
  void print() {
    cout << "Введите числитель" << endl;
    cin >> chislitel;
   
    cout << "Введите знаменатель" << endl;
    cin >> znamenatel;
  }

  Fraction ymnochenie(Fraction b) 
  {
    Fraction result{};
    result.chislitel = chislitel * b.chislitel;
    result.znamenatel = znamenatel * b.znamenatel;
    return result;
  }

  Fraction summa(Fraction b) 
  {
    Fraction result{};
    result.chislitel = chislitel * b.znamenatel + b.chislitel * znamenatel;
    result.znamenatel = znamenatel * b.znamenatel;
    return result;
  }

  Fraction vichitanie(Fraction b) 
  {
    Fraction result{};
    result.chislitel = chislitel * b.znamenatel - b.chislitel * znamenatel;
    result.znamenatel = znamenatel * b.znamenatel;
    return result;
  }

  Fraction delenie(Fraction b) 
  {
    Fraction result{};
    result.chislitel = chislitel * b.znamenatel;
    result.znamenatel = znamenatel * b.chislitel;
    return result;
  }  

  void output() 
  {
    if (znamenatel == 1) {
      cout << chislitel;
    } else {
      cout << chislitel << "/" << znamenatel << endl << endl;
    }
  }

};

int main() {
  Fraction a, b, c;
  
  a.print();
  b.print();    
  
  c = a.vichitanie(b);
  cout << "Вычитание:" << endl;
  c.output();
  
  c = a.summa(b);
  cout << "Сумма:" << endl;
  c.output();
  
  c = a.ymnochenie(b);
  cout << "Умнодение:" << endl;
  c.output();
  
  c = a.delenie(b);
  cout << "Деление:" << endl;
  c.output();
}