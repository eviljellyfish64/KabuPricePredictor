#pragma once
class Predictor{
	public:
		int base_price;
		int price[13];
		void calculate();
		int search4type(int * input_price);

};

