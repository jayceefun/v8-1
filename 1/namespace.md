
V8 Namespaces
----

# Intro

The V8 API is contrived in a single namespace defined as `v8`. The
entire API can be accessed from the `v8` namespace with the `::` scope
resolution operator known as the "Paamayim Nekudotayim" operator which
is a Hebrew word meaning "twice colon" or "double dot twice".
Namespaces, static methods, and static properties are accessed with this
operator.

***Accessing the `v8::V8` class and calling the `Initialize()` static method***

```c++i
v8::V8::Initialize();
```

# Using the v8 namespace

When consuming the v8 API it can be cumbersome to access the v8 classes,
functions, and properties by prefixing with `v8::` every time. In C++ we
can eliminate that by "using" the `v8` namespace. This also makes it
easier to read.

***Using the `v8` namespace and consuming its API***

```c++
using namespace v8;

Local<Object> global = Object::New();
```

If we didn't use the `v8` namespace our code would look like this:

```c++
v8::Persistent<v8::Object> global = v8::Object::New();
```

When using the `v8` namespace you must consider if code you introduce
and/or have written will have conflicting class names. If you have
created a class `Object` and you "use" the `v8` namespace then there
will be naming confliction.

# v8 namespace members

The `v8` namespace houses many different parts of the API that makes up
the `v8` API as we know it. Some of these members include functions,
typedefs, and enumerations. The `v8` namespace also contains the classes
that you will end up working with most.

## Functions

Functions defined directly at the root of the `v8` namespace.

### v8::Undefined()

Returns an `undefined` value of type `v8::Handle<v8::Primitive>`

```c++
v8::Local<v8::Undefined> undefined = v8::Undefined();
```

### v8::Null()

Returns a `null` value of type `v8::Handle<v8::Primitive>`

```c++
v8::Local<v8::Null> null = v8::Null();
```

### v8::True()

Returns an `true` value of type `v8::Handle<v8::Boolean>`

```c++
v8::Local<v8::True> true = v8::True();
```

### v8::False()

Returns an `false` value of type `v8::Handle<v8::Boolean>`

```c++
v8::Local<v8::False> false = v8::false();
```

### v8::ThrowException( v8::Handle<v8::Value> exception )

Schedules an exception to be thrown when returning to JavaScript. When
an exception ha been scheduled it is illegal to invoke any JavaScript
operation; the caller must return immediately and only after the
exception has been handled does it become legal to invoke JavaScript
opertions.

```c++
v8::ThrowException(v8::String::New("Oops!"));
```

## Typedefs

Type definitions declared at the root of the `v8` namespace.

### v8::AccessorGetter

A type used for an accessor (getter/setter) as callback functions when
getting or setting a particular property on an object. This type defines
a certain function signature and is used with the
`v8::ObjectTemplate::SetAccessor()` method. 
