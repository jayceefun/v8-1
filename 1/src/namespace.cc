
#include <v8.h>

using namespace v8;

int
main (void) {
  V8::Initialize();
  Local<Object> global = Object::New();
  V8::Dispose();
  return 0;
}
