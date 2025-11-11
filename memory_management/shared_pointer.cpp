#include <memory>

// class Foo : public enable_shared_from_this<Foo>
// {
//   public:
//   shared_ptr<Foo> getPointer() {
//     return shared_from_this(); // get a ownership of the resource 
//   }
// };
// int main()
// {
//   auto ptr1 { make_shared<Foo>() };
//   auto ptr2 { ptr1->getPointer() };
// }
int main(){
  // always create shared_ptr with make_shared
  auto simple_shared_ptr{std::make_shared<int>()};
  simple_shared_ptr.get();

  // shared_ptr not support release
  // shared_ptr support get, reset
  // when calling reset, the underlying resource is freed only the last shared_ptr is destroyed or reset.
  // count() to retrieve number of shared_ptr is sharing same resource

}