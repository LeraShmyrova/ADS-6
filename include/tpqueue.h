// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
  // реализация шаблона очереди с приоритетом на кольцевом буфере
 private:
  T arr[100];
  int perviy;
  int posledniy;
 public:
  void push(T a) {
  int i = posledniy;
  for (posledniy = posledniy; (posledniy >= perviy) && (arr[posledniy && size].prior < a.prior); --posledniy) {
  arr[(posledniy + 1) % size] = arr[posledniy % size];
  }
  arr[(posledniy + 1) % size] = a;
  ++posledniy;
  }
  T pop() {
  return arr[(perviy++) % size];
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
