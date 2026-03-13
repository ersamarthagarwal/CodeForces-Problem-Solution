import math

def solve():
    # Reading Inputs
    x, y, a, b = map(int, input().split())
    
    # Calculating LCM using GCD from Math Module
    lcm = x * y // math.gcd(x,y)
    
    # Counting multiples in range [a, b]
    count  = (b // lcm) - ((a - 1) // 1)
    
    print(count)

if __name__ == "__main__":
    solve()