// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

class RefCounter
{
public:

    ::Ozone::RefCounter* __Instance;

    RefCounter(::Ozone::RefCounter* instance, bool ownNativeInstance = false);

    RefCounter();

    RefCounter(const ::Ozone::Ozone::RefCounter& _0);

    ~RefCounter();

    int GetRefCount() const;

    void IncRef();

    void DecRef();

protected:

    bool __ownsNativeInstance;
};

class Object
{
public:

    ::Ozone::Object* __Instance;

    Object(::Ozone::Object* instance, bool ownNativeInstance = false);

    Object();

    Object(const ::Ozone::Ozone::Object& other);

    ~Object();

    ::Ozone::Ozone::RefCounter* GetRefData() const;

    void SetRefData(::Ozone::Ozone::RefCounter* data);

    void Ref(const ::Ozone::Ozone::Object& clone);

    void UnRef();

    void UnShare();

    bool IsSameAs(const ::Ozone::Ozone::Object& o) const;

protected:

    bool __ownsNativeInstance;
};
