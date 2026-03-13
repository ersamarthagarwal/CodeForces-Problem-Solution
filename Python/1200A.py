n = int(input())
s = input()
rooms = ['0'] * 10

for ch in s:
    if ch == 'L':
        rooms[rooms.index('0')] = '1'
    elif ch == 'R':
        rooms[9 - rooms[::-1].index('0')] = '1'
    else:
        rooms[int(ch)] = '0'

print(''.join(rooms))