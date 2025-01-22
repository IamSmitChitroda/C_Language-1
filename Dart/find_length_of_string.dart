import 'dart:io';

void main() {
  int number = 99;
  stdout.write("Enter number : ");
  number = int.parse(stdin.readLineSync()!);
  print("Multiflication table of $number\n");
  
  for (int i = 1; i <= 10; i++) {
    print('$number * $i = ${number * i}');
  }
  
}
