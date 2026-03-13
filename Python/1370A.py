def solve():
    t = int(input())
    
    for _ in range(t):
        n = int(input())
        # Integer division automatically handles both even and odd cases
        print(n // 2)

if __name__ == "__main__":
    solve()