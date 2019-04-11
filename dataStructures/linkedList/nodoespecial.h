#ifndef NODOESPECIAL_H
#define NODOESPECIAL_H

#include <QString>
#include <iostream>

using namespace std;


class nodoespecial
{
public:

    nodoespecial();


    int getX() const;
    void setX(int value);

    string getLetra() const;
    void setLetra(const string &value);

    int getY() const;
    void setY(int value);



    bool getEstado() const;
    void setEstado(bool value);



    bool getUsadavertical() const;
    void setUsadavertical(bool value);

    bool getUsadahorizontal() const;
    void setUsadahorizontal(bool value);

private:
    int x;
    int y;
    string letra;
    bool estado;
    bool usadavertical;
    bool usadahorizontal;
};

#endif // NODOESPECIAL_H
