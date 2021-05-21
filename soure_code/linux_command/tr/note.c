Linux tr 命令用于转换或删除文件中的字符。
tr 指令从标准输入设备读取数据，经过字符串转译后，将结果输出到标准输出设备。

cat testfile.txt | tr a-z A-Z
cat testfile.txt | tr [:lower:] [:upper:]
