//
// Created by KTC on 2/11/2023.
//
int scs(int n)
{
    int dem=0;
    while (n>0)
    {
        dem++;n/=10;
    }
    return dem;
}