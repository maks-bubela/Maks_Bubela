#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{   setlocale(LC_ALL, "Russian");
    int food = 1000; // Мешков зерна
    int peoples = 100; // Люди
    int ground = 100; // Гектаров земли
    int ground_in; // Сколько земли хотим купить
    int ground_out; // Сколько земли хотим продать
    int ground_top=2; // Разница в цене
    int years = 0; // Лет правления
    int food_for; // Еды для Крестьян
    int buy; // Для покупки земли
    int price; //Цена земли
    int grow = 0; // Сколько гектаров нам нужно засеять
    int grow_in = -1; // Засеяные гектары
    int peoples_out = 0; //Бомжей
    int revolution = 0; //Лет до бунта
    int result = 0; // Результат бунта

    cout << "В королевстве сейчас настали тяжкие времена."
    "\nВ связи с постоянными войнами людских ресурсов осталось довольно мало,"
    "\nа границы королевства были сокращенны до 100 гектаров."
    "\nЕды в запасах осталось всего на 10 лет."
    "\nПосреди всего этого внезапно умерает старый король,\n\rкоторый правил на протяжении 37 лет."
    "\nВы сын покойного короля и единственный законный наследник трона."
    "\nВам выпала честь управлять всем королевством."
    "\nСможете ли Вы возвысить это королевство до мирового лидера\n\rи обеспечить ее процветание На многие поколения?\n\rНаш народ Надеется на Вас и вверяет будущее в ваши руки" << endl ;
    do
    {   food = food - grow;
        cout << "\nЛет правления : " << years << endl;
        cout << "Людей : " << peoples << endl;
        cout << "Земли : " << ground << endl;
        cout << "Мешков зерна : " << food << endl;
        cout << "Свободных земель : " << ground -grow << endl;


        cout << "Отдать мешков зерна крестьянам : ";
        cin >> food_for;
        food = food-food_for;
        food = food + (grow*1.5);

        cout << "\nВы собрали урожай в этом году он составил  : " << grow*1.5 << endl;
        grow=0;
        if (food_for > 0 )
        {
            cout << "Спасибо что накормили крестьян!!!" << endl;
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
        cout << "\nНе хотите ли вы купить земли? (1-да; 2-нет;)" << endl;
        cout << "Нынешняя цена покупки за 1 Га : " << price+ground_top << endl;
        cout << "Нынешняя цена продажи за 1 Га : " << price-ground_top << endl;
        cin >> buy;
        if (buy==1)
        {
            cout << "Земли в наличии : " << ground << endl;
            cout << "Купить земли : " ;
            cin >> ground_in;
            if (ground_in>0)
            {
                ground = ground+ground_in;
                food -= ground_in*(price+ground_top);
            }

            cout << "\nПродать земли : " ;
            cin >> ground_out;
            if (ground_out>0)
            {
                ground = ground-ground_out;
                food += ground_out*(price-ground_top);
            }




        }
        else
        {
            cout << "Как пожелаете ваше величество" << endl ;
        }



        grow_in=ground ;
        cout << "\nСколько гектаров земли вы бы хотели засеять? : ";
        cin >> grow;
        grow_in = grow_in-grow;




         cout << "Вы сможете собрать урожай после следуйщего прокорма селян" << endl;
         if (peoples>ground)
         {
             peoples_out= peoples-ground;
             cout << "Купите земли для ваших крестьян иначе грядет бунт"<<endl;

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
             cout << "Вы потеряли людей и земель : " << result;
             revolution = 0;
         }






years++;
    }while(food>0 && peoples>10 && ground > 10);
    cout << "\nСеляне массово повстали против вас потому что не хотели больше этого терпеть"<< endl;
    cout << "Вы проиграли протянув при этом : " << years << " лет" <<endl;



}
