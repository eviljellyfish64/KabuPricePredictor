#pragma once
class Predictor{
        public:
		int base_price;
		int price[13][72];
		void calculate();
		int search4type(int * input_price);
};

Predictor::Predictor{
	this.base_price = 0;
	this.price = {0};
}

void Predictor::calculate(){
		
