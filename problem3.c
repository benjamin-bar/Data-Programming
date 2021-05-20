#include <stdio.h>

int main (){
//brace yourself for really terrible coding
int a, b, c, d, e;

printf("Type five integers:\n");

scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

if (a > b && a > c && a > d && a > e){

if (b < c && b < d && b < e) {
printf("%d %d\n", a, b);}
else if ( c < d && c < e) {
printf("%d %d\n", a,c);}
else if (d < e){
printf("%d %d\n", a,d);}
else {
printf("%d %d\n", a, e);}
}


if (b > a && b > c && b > d && b > e){

if (a < c && a < d && a < e) {
printf("%d %d\n", b, a);}
else if ( c < d && c < e) {
printf("%d %d\n", b,c);}
else if (d < e){
printf("%d %d\n", b,d);}
else {
printf("%d %d\n", b, e);}
}


if (c > a && c > b && c > d && c > e){

if (a < b && a < d && b < e) {
printf("%d %d\n", c, a);}
else if ( b < d && b < e) {
printf("%d %d\n", c,b);}
else if (d < e){
printf("%d %d\n", c,d);}
else {
printf("%d %d\n", c, e);}
}


if (d > a && d > b && d > c && a > e){

if (a < b && a < c && b < e) {
printf("%d %d\n", d, a);}
else if ( b < b && b < e) {
printf("%d %d\n", d,b);}
else if (c < e){
printf("%d %d\n", d,c);}
else {
printf("%d %d\n", d, e);}
}

if (e > a && e > b && e > c && e > d){

if (a < b && a < c && a < d) {
printf("%d %d\n", e, a);}
else if ( b < c && b < d) {
printf("%d %d\n", e,b);}
else if (c < d){
printf("%d %d\n", e,c);}
else {
printf("%d %d\n", e, d);}
}


return 0;


}
