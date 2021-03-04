#!/bin/bash


function hello() {
	echo "Hello!"
}

function hello_param() {
	echo "Hello $1"
}

echo "function alert"
hello
hello_param ben
