// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
  // реализация шаблона очереди с приоритетом на кольцевом буфере
 private:
  T arr[size] = {0};
  int perviy;
  int posledniy;
 public:
  void push(T a) {
  int i = posledniy;
  for (i = posledniy; (i >= perviy) && (arr[i && size].prior < a.prior); --i) {
  arr[(i + 1) % size] = arr[i % size];
  }
  arr[(i + 1) % size] = a;
  ++i;
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
