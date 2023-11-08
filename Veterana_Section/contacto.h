#ifndef CONTACTO_H_INCLUDED
#define CONTACTO_H_INCLUDED

#include <iostream>
#include "lista.h"
#include <string>
using namespace std;

class Contacto {
    private:
        string nombre, mail, direccion,  organizacion, puesto, notas;
        string numero;
        string cumple;
        Lista<string> links;

    public:
        Contacto(string & n, string & m, string & d, string & o, string & p, string & _notas, string & cel, string & c, Lista<string> &otro) {
            nombre = n;
            mail = m;
            direccion = d;
            organizacion = o;
            puesto = p;
            notas = _notas;
            numero = cel;
            cumple = c;
            links = otro;
        }

        Contacto(){
            links = Lista<string>();
        }

        Contacto & operator = (const Contacto & otro) {
            this->nombre = otro.nombre;
            this->cumple = otro.cumple;
            this->direccion = otro.direccion;
            this->mail = otro.mail;
            this->notas = otro.notas;
            this->numero = otro.numero;
            this->organizacion = otro.organizacion;
            this->puesto = otro.puesto;
            this->links = otro.links;
            return * this;
        }

        void modificar_nombre (const string & nombre) {
            this->nombre = nombre;
        }

        bool operator >(const Contacto & otro) const {
            return this->nombre > otro.nombre;
        }

        bool operator <(const Contacto & otro) const {
            return this->nombre < otro.nombre;
        }

        bool operator== (const Contacto & otro) const {
            return this->nombre == otro.nombre;
        }

        friend ostream & operator << (ostream& os, const Contacto & c) {
            os << endl << "<Datos contacto>"
               << "\nNombre: " << c.nombre
               << "\nMail: " << c.mail
               << "\nDirecci�n: " << c.direccion
               << "\nOrganizaci�n: " << c.organizacion
               << "\nPuesto: " << c.puesto
               << "\nNumero: " << c.numero
               << "\nFecha de cumplea�os: " << c.cumple
               << "\nLinks: " << c.links
               << "\n<Fin de datos>"<<endl;
            return os;
        }
};

#endif // CONTACTO_H_INCLUDED
