#include "nodoespecial.h"
#include <QString>

nodoespecial::nodoespecial()
{

}

int nodoespecial::getX() const
{
    return x;
}

void nodoespecial::setX(int value)
{
    x = value;
}

string nodoespecial::getLetra() const
{
    return letra;
}

void nodoespecial::setLetra(const string &value)
{
    letra = value;
}


int nodoespecial::getY() const
{
    return y;
}

void nodoespecial::setY(int value)
{
    y = value;
}

bool nodoespecial::getEstado() const
{
    return estado;
}

void nodoespecial::setEstado(bool value)
{
    estado = value;
}

bool nodoespecial::getUsadavertical() const
{
    return usadavertical;
}

void nodoespecial::setUsadavertical(bool value)
{
    usadavertical = value;
}

bool nodoespecial::getUsadahorizontal() const
{
    return usadahorizontal;
}

void nodoespecial::setUsadahorizontal(bool value)
{
    usadahorizontal = value;
}


