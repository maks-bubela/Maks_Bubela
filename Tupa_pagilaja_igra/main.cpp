#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int food = 1000; // ������ �����
    int peoples = 100; // ����
    int ground = 100; // �������� �����
    int ground_in; // ������� ����� ����� ������
    int ground_out; // ������� ����� ����� �������
    int ground_top=2; // ������� � ����
    int years = 0; // ��� ���������
    int food_for; // ��� ��� ��������
    int buy; // ��� ������� �����
    int price; //���� �����
    int grow = 0; // ������� �������� ��� ����� �������
    int grow_in = -1; // �������� �������
    int peoples_out = 0; //������
    int revolution = 0; //��� �� �����
    int result = 0; // ��������� �����

    cout << "� ����������� ������ ������� ������ �������."
    "\n� ����� � ����������� ������� ������� �������� �������� �������� ����,"
    "\n� ������� ����������� ���� ���������� �� 100 ��������."
    "\n��� � ������� �������� ����� �� 10 ���."
    "\n������� ����� ����� �������� ������� ������ ������,\n\r������� ������ �� ���������� 37 ���."
    "\n�� ��� ��������� ������ � ������������ �������� ��������� �����."
    "\n��� ������ ����� ��������� ���� ������������."
    "\n������� �� �� ��������� ��� ����������� �� �������� ������\n\r� ���������� �� ����������� �� ������ ���������?\n\r��� ����� �������� �� ��� � ������� ������� � ���� ����" << endl ;
    do
    {   food = food - grow;
        cout << "\n��� ��������� : " << years << endl;
        cout << "����� : " << peoples << endl;
        cout << "����� : " << ground << endl;
        cout << "������ ����� : " << food << endl;
        cout << "��������� ������ : " << ground -grow << endl;


        cout << "������ ������ ����� ���������� : ";
        cin >> food_for;
        food = food-food_for;
        food = food + (grow*1.5);

        cout << "\n�� ������� ������ � ���� ���� �� ��������  : " << grow*1.5 << endl;
        grow=0;
        if (food_for > 0 )
        {
            cout << "������� ��� ��������� ��������!!!" << endl;
        }
        if (food_for >= peoples*1.5)
        {
            peoples += (peoples/100)*10;
        }
        else if (food_for >= peoples)
        {
            peoples +=(peoples/100)*5;
        }
        else if (food_for < peoples)
        {
            peoples -= peoples-food_for;
        }
        srand (time(0));
        price = (1 + rand () %12)+12;
        cout << "\n�� ������ �� �� ������ �����? (1-��; 2-���;)" << endl;
        cout << "�������� ���� ������� �� 1 �� : " << price+ground_top << endl;
        cout << "�������� ���� ������� �� 1 �� : " << price-ground_top << endl;
        cin >> buy;
        if (buy==1)
        {
            cout << "����� � ������� : " << ground << endl;
            cout << "������ ����� : " ;
            cin >> ground_in;
            if (ground_in>0)
            {
                ground = ground+ground_in;
                food -= ground_in*(price+ground_top);
            }

            cout << "\n������� ����� : " ;
            cin >> ground_out;
            if (ground_out>0)
            {
                ground = ground-ground_out;
                food += ground_out*(price-ground_top);
            }




        }
        else
        {
            cout << "��� ��������� ���� ����������" << endl ;
        }



        grow_in=ground ;
        cout << "\n������� �������� ����� �� �� ������ �������? : ";
        cin >> grow;
        grow_in = grow_in-grow;




         cout << "�� ������� ������� ������ ����� ���������� �������� �����" << endl;
         if (peoples>ground)
         {
             peoples_out= peoples-ground;
             cout << "������ ����� ��� ����� �������� ����� ������ ����"<<endl;

         }
         if (peoples_out>=15)
         {
            revolution++;
         }
         if (revolution==2)
         {
             result = (rand()%15)+1;
             peoples = peoples-result;
             ground = ground - result;
             cout << "�� �������� ����� � ������ : " << result;
             revolution = 0;
         }






years++;
    }while(food>0 && peoples>10 && ground > 10);
    cout << "\n������ ������� �������� ������ ��� ������ ��� �� ������ ������ ����� �������"<< endl;
    cout << "�� ��������� �������� ��� ���� : " << years << " ���" <<endl;



}
