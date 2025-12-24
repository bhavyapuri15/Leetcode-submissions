class Solution:
    def wateringPlants(self, plants: List[int], capacity: int) -> int:
        c=0
        dup=capacity
        for i in range(len(plants)):
            if capacity-plants[i]<0:
                c=c+i+1+i
                capacity=dup-plants[i]
                
            else:
                c=c+1
                capacity=capacity-plants[i]    
        return c