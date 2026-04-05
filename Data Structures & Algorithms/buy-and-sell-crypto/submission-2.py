class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = 10005
        profit = 0
        
        for price in prices:
            if price < minPrice: 
                minPrice = price
            profit = max(profit, price - minPrice)

        return profit
        
        