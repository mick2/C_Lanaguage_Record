configure:
1. community table add public/ReadOnly, private/ReadWrite
2. config IPv4 addr: 192.168.10.215
3. config IPv6 addr: 2001::999/64

====================================================================================

** snmpwalk
<pre>
snmpwalk:这个命令是用来获取snmp代理中的所有oid的值,当然也可以通过它来获取某个oid的值.
用法: snmpwalk -c public -v 1 localhost [OID]
</pre>

** snmpset
<pre>
snmpset: 这个命令的作用是用来修改mib库中某个oid的值
用法: snmpset -c public -v 1 localhost OID type value.
其中: type的含义是指这个oid的类型,如int,String等,这个类型必须和这个oid的类型相同.
</pre>

** SNMP test(IPv4).bat
<pre>
set count=1
:loop
snmpwalk -v 2c -c private 192.168.1.215 1.3.6.1.4.1.207.1.4.327
snmpset -v 2c -c private 192.168.1.215 1.3.6.1.4.1.207.1.4.327.16.1.9.0 s cameo
set /A count+=1
echo %count%
goto loop
</pre>

** SNMP test(IPv6).bat
<pre>
set count=1
:loop
snmpwalk -v 2c -c private udp6:[2001::999] 1.3.6.1.4.1.207.1.4.327
snmpset -v 2c -c private udp6:[2001::999] 1.3.6.1.4.1.207.1.4.327.16.1.9.0 s cameo222
set /A count+=1
echo %count%
goto loop
</pre>

==========================================================================================
学习资料:
1. https://www.cnblogs.com/xdp-gacl/p/3978825.html







