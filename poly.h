#include <string>
#ifndef POLY_H
#define POLY_H


class poly
{
    public:
        poly();
        virtual ~poly();

        void setvalue_a (int va);
        void setvalue_b (int vb);
        void setvalue_c (int vc);
        int getvalue_a ();
        int getvalue_b ();
        int getvalue_c ();
        int calroots (float y);
        int calextre (int a);
        int caly (int x);

    protected:
    private:
        int value_a;
        int value_b;
        int value_c;

};

#endif // POLY_H
