class Solution(object):
    def maxIceCream(self, costs, coins):
        """
        :type costs: List[int]
        :type coins: int
        :rtype: int
        """
        max_cost = max(costs)
        frequencies = [0]*(max_cost + 1)
        for cost in costs:
            frequencies[cost] +=1

        ice_cream_count = 0
        for price in range(1, max_cost + 1):
            if frequencies[price] == 0:
                continue

            if price > coins:
                break
            can_buy = min(frequencies[price], coins // price)
            ice_cream_count += can_buy
            coins -= can_buy * price

        return ice_cream_count
        