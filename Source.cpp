#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	float choose, choose_drink, sum = 0, sum_quantity = 0, sum_drink = 0, skidka_for_drink = 0;//sum_drink - сумма $ для напитков, которые дороже 2$ skidka_for_drink - скидка
	int quantity, quantity_drink, skidka, quantity_1 = 0, quantity_2 = 0, quantity_3 = 0, quantity_4 = 0, quantity_5 = 0, quantity_6 = 0, quantity_7 = 0, sum_quantity_pizza = 0;//1-греческая, 2-Пепперони, 3-гавайская, 4-Деревенская,5,6,7 - напитки
	int sum_1=0, sum_2=0, sum_3=0, sum_4=0, sum_5=0, sum_6=0, sum_7=0, itog = 0;
	bool True = true;
	while (True == true) {
		cout << "Выберите пиццу (напишите код продукта): " << endl;
		cout << "1 - Греческая 10$" << endl;
		cout << "2 - Пепперони 12$" << endl;
		cout << "3 - Гавайская 8$" << endl;
		cout << "4 - Деревенская 15$" << endl;
		cout << "0 - Если отказ от пиццы" << endl << endl;
		cin >> choose;

		if (choose == 1 || choose == 2|| choose == 3|| choose == 4) {
			cout << "Введите количество продукта: ";
			cin >> quantity;
			sum_quantity_pizza = sum_quantity_pizza + quantity;
			skidka = sum_quantity_pizza / 5;
		}
		if (choose == 1) {
			sum = sum + (quantity - skidka) * 10;


			sum_1+= (quantity - skidka) * 10;
			quantity_1 += quantity;
			cout << "\nВыбрана Греческая в количестве " << quantity_1 << ". Сумма заказа равна " << sum << "$" << endl << endl;
		}


		else if (choose == 2) {
			sum = sum + (quantity - skidka) * 12;


			sum_2 += (quantity - skidka) * 12;
			quantity_2 += quantity;
			cout << "\nВыбрана Пепперони в количестве " << quantity_2 << ". Сумма заказа равна " << sum << "$" << endl << endl;

		}

		else if (choose == 3) {
			sum = sum + (quantity - skidka) * 8;


			quantity_3 += quantity;
			sum_3 += (quantity - skidka) * 8;

			cout << "\nВыбрана Гавайская в количестве " << quantity_3 << ". Сумма заказа равна " << sum << "$" << endl << endl;

		}

		else if (choose == 4) {
			sum = sum + (quantity - skidka) * 15;


			quantity_4 += quantity;
			sum_4 += (quantity - skidka) * 15;
			cout << "\nВыбрана Деревенская в количестве " << quantity_4 << ". Сумма заказа равна " << sum << "$" << endl << endl;
		}

		else if (choose == 0){
			True = false;

		}
		else {
			continue;
		}
		if (sum_quantity_pizza > 4)
		{
			sum_quantity_pizza -= (sum_quantity_pizza / 5) * 5;//обнуление количества пиццы, чтобы не было бесплатной пиццы

		}


	}
	True = true;
	while (True == true) {
		cout << "Выберите напиток(напишите код продукта)" << endl;
		cout << "1 - Чай 2$" << endl;
		cout << "2 - Coca-cola 3$" << endl;
		cout << "3 - Sprite 3$" << endl;
		cout << "0 - Отказ от напитка" << endl;

		cin >> choose_drink;

		if (choose_drink != 0) {

			cout << "\nВ каком количестве: ";
			cin >> quantity_drink;
			
			
		}

		if (choose_drink == 1)
		{
			sum_5 += quantity_drink * 2;

			quantity_5 += quantity_drink;

			sum = sum + quantity_drink * 2;
			cout << "\nВыбран Чай в количестве " << quantity_5 << ". Сумма заказа равна " << sum << "$" << endl << endl;


		}

		else if (choose_drink == 2) {
			sum_6 += quantity_drink * 3;
			sum_quantity += quantity_drink;
			quantity_6 += quantity_drink;

			sum = sum + quantity_drink * 3;
			cout << "\nВыбрана Coca_cola в количестве " << quantity_6 << ". Сумма заказа равна " << sum << "$" << endl << endl;
			sum_drink += quantity_drink * 3;
		}

		else if (choose_drink == 3) {
			sum = sum + quantity_drink * 3;
			sum_quantity += quantity_drink;
			quantity_7 += quantity_drink;

			sum_7 += quantity_drink * 3;
			cout << "\nВыбран Sprite в количестве " << quantity_7 << ". Сумма заказа равна " << sum << "$" << endl << endl;
			sum_drink += quantity_drink * 3;

		}
		else if(choose_drink == 0){
			True = false;
		}
		else {
			continue;
		}
	}
	itog = sum;

	


	cout << endl << endl;
	if (quantity_1 != 0) {
		cout << "Греческая пицца: " << quantity_1<<" штук. Стоимость равна: "<<sum_1<<"$"<<endl;
	}
	if (quantity_2 != 0) {
		cout << "Пепперони: " << quantity_2 << " штук. Стоимость равна: " << sum_2 << "$"<<endl;
	}
	if (quantity_3 != 0) {
		cout << "Гавайская пицца: " << quantity_3 << " штук. Стоимость равна: " << sum_3 << "$"<<endl;
	}
	if (quantity_4 != 0) {
		cout << "Деревенская пицца: " << quantity_4 << " штук. Стоимость равна: " << sum_4 << "$"<<endl;
	}
	if (quantity_5 != 0) {
		cout << "Чай : " << quantity_5 << " штук. Стоимость равна: " << sum_5 << "$"<<endl;
	}
	if (quantity_6 != 0) {
		cout << "Coca-Cola: " << quantity_6 << " штук. Стоимость равна: " << sum_6 << "$"<<endl;
	}
	if (quantity_7 != 0) {
		cout << "Sprite: " << quantity_7 << " штук. Стоимость равна: " << sum_7 << "$"<<endl;


	}

	cout << itog << "$ без учета скидок"<<endl;


	if (sum_quantity > 3) {
		skidka_for_drink = (sum_5+sum_6+sum_7) * 0.15;
		sum = sum - skidka_for_drink;
		cout << "Скидка на напитки 15% - " << skidka_for_drink<<"$" << endl << endl;
	}
	

	if (sum > 50) {


		cout << "Скидка на заказ 20% -  "<<sum*0.2<<"$" << endl << endl;
		sum = sum - sum * 0.2;
	}

	cout << (quantity_1 + quantity_2 + quantity_3 + quantity_4) / 5 << " Пицц в подарок"<<endl<<endl;
	
	cout << "\nИтоговая сумма равна " << sum<<"$"<<endl;



	return 0;
}