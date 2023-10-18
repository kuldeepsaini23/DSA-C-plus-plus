#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


//* Buy and Sell Stocks
void maxProfitFinder(vector<int>& prices, int i, int &minPrice, int&maxProfit){
  //Base
  if(i==prices.size()) return;

  //Sol for one case
  if(prices[i] < minPrice) minPrice = prices[i];
  int todayProfit = prices[i] - minPrice;
  if(todayProfit > maxProfit)  maxProfit = todayProfit;


  //Recrusive Call
  maxProfitFinder(prices, i+1,minPrice,maxProfit);
}

int maxProfit(vector<int>& prices){
  int maxProfit = INT_MIN;
  int minPrice = INT_MAX;
  maxProfitFinder(prices,0,minPrice, maxProfit);
  return maxProfit;
}


int main(){
  //* Buy and Sell Stocks
  vector<int> prices = {7,9,2,5,3,1};
  cout<<maxProfit(prices);
      
 return 0;
}