import socket 
import sys 

mysock = socket.socket(socket.AF_INET , socket.SOCK_STREAM)

try:
    mysock.bind(("",32003))

except: 
    print("FAILED to BIND")
    sys.exit ()

mysock.listen(5)
conn, addr = mysock.accpet() 
print ("Connection from: " + str(addr))  

while True:
    data = conn.recv(1024) .decode()
    if not data:
        break
    print ("From connected user: " + str(data))
    data = input ('-->')
    conn.send (data.encode())

conn.close()
mysock.close()

