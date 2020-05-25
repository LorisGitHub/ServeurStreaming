// **********************************************************************
//
// Copyright (c) 2003-2017 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.7.0
//
// <auto-generated>
//
// Generated from file `Player.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Player_h__
#define __Player_h__

#include <IceUtil/PushDisableWarnings.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/ValueF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Comparable.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/GCObject.h>
#include <Ice/Value.h>
#include <Ice/Incoming.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <Ice/Optional.h>
#include <IceUtil/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 0
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace Player
{

class VlcPlayer;
class VlcPlayerPrx;

}

namespace Player
{

class VlcPlayer : public virtual ::Ice::Object
{
public:

    using ProxyType = VlcPlayerPrx;

    virtual bool ice_isA(::std::string, const ::Ice::Current&) const override;
    virtual ::std::vector<::std::string> ice_ids(const ::Ice::Current&) const override;
    virtual ::std::string ice_id(const ::Ice::Current&) const override;

    static const ::std::string& ice_staticId();

    virtual ::std::string play(::std::string, const ::Ice::Current&) = 0;
    bool _iceD_play(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&) override;
};

}

namespace Player
{

class VlcPlayerPrx : public virtual ::Ice::Proxy<VlcPlayerPrx, ::Ice::ObjectPrx>
{
public:

    ::std::string play(const ::std::string& iceP_trackName, const ::Ice::Context& context = Ice::noExplicitContext)
    {
        return _makePromiseOutgoing<::std::string>(true, this, &Player::VlcPlayerPrx::_iceI_play, iceP_trackName, context).get();
    }

    template<template<typename> class P = ::std::promise>
    auto playAsync(const ::std::string& iceP_trackName, const ::Ice::Context& context = Ice::noExplicitContext)
        -> decltype(::std::declval<P<::std::string>>().get_future())
    {
        return _makePromiseOutgoing<::std::string, P>(false, this, &Player::VlcPlayerPrx::_iceI_play, iceP_trackName, context);
    }

    ::std::function<void()>
    playAsync(const ::std::string& iceP_trackName,
              ::std::function<void(::std::string)> response,
              ::std::function<void(::std::exception_ptr)> ex = nullptr,
              ::std::function<void(bool)> sent = nullptr,
              const ::Ice::Context& context = Ice::noExplicitContext)
    {
        return _makeLamdaOutgoing<::std::string>(response, ex, sent, this, &Player::VlcPlayerPrx::_iceI_play, iceP_trackName, context);
    }

    void _iceI_play(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::std::string>>&, const ::std::string&, const ::Ice::Context&);

    static const ::std::string& ice_staticId();

protected:

    VlcPlayerPrx() = default;
    friend ::std::shared_ptr<VlcPlayerPrx> IceInternal::createProxy<VlcPlayerPrx>();

    virtual ::std::shared_ptr<::Ice::ObjectPrx> _newInstance() const override;
};

}

namespace Ice
{

}

namespace Player
{

using VlcPlayerPtr = ::std::shared_ptr<VlcPlayer>;
using VlcPlayerPrxPtr = ::std::shared_ptr<VlcPlayerPrx>;

}

#else // C++98 mapping

namespace IceProxy
{

namespace Player
{

class VlcPlayer;
void _readProxy(::Ice::InputStream*, ::IceInternal::ProxyHandle< ::IceProxy::Player::VlcPlayer>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Player::VlcPlayer*);

}

}

namespace Player
{

class VlcPlayer;
::Ice::Object* upCast(::Player::VlcPlayer*);
typedef ::IceInternal::Handle< ::Player::VlcPlayer> VlcPlayerPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Player::VlcPlayer> VlcPlayerPrx;
typedef VlcPlayerPrx VlcPlayerPrxPtr;
void _icePatchObjectPtr(VlcPlayerPtr&, const ::Ice::ObjectPtr&);

}

namespace Player
{

class Callback_VlcPlayer_play_Base : public virtual ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_VlcPlayer_play_Base> Callback_VlcPlayer_playPtr;

}

namespace IceProxy
{

namespace Player
{

class VlcPlayer : public virtual ::Ice::Proxy<VlcPlayer, ::IceProxy::Ice::Object>
{
public:

    ::std::string play(const ::std::string& iceP_trackName, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return end_play(_iceI_begin_play(iceP_trackName, context, ::IceInternal::dummyCallback, 0, true));
    }

    ::Ice::AsyncResultPtr begin_play(const ::std::string& iceP_trackName, const ::Ice::Context& context = ::Ice::noExplicitContext)
    {
        return _iceI_begin_play(iceP_trackName, context, ::IceInternal::dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_play(const ::std::string& iceP_trackName, const ::Ice::CallbackPtr& del, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_play(iceP_trackName, ::Ice::noExplicitContext, del, cookie);
    }

    ::Ice::AsyncResultPtr begin_play(const ::std::string& iceP_trackName, const ::Ice::Context& context, const ::Ice::CallbackPtr& del, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_play(iceP_trackName, context, del, cookie);
    }

    ::Ice::AsyncResultPtr begin_play(const ::std::string& iceP_trackName, const ::Player::Callback_VlcPlayer_playPtr& del, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_play(iceP_trackName, ::Ice::noExplicitContext, del, cookie);
    }

    ::Ice::AsyncResultPtr begin_play(const ::std::string& iceP_trackName, const ::Ice::Context& context, const ::Player::Callback_VlcPlayer_playPtr& del, const ::Ice::LocalObjectPtr& cookie = 0)
    {
        return _iceI_begin_play(iceP_trackName, context, del, cookie);
    }

    ::std::string end_play(const ::Ice::AsyncResultPtr&);

private:

    ::Ice::AsyncResultPtr _iceI_begin_play(const ::std::string&, const ::Ice::Context&, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& cookie = 0, bool sync = false);

public:

    static const ::std::string& ice_staticId();

protected:

    virtual ::IceProxy::Ice::Object* _newInstance() const;
};

}

}

namespace Player
{

class VlcPlayer : public virtual ::Ice::Object
{
public:

    typedef VlcPlayerPrx ProxyType;
    typedef VlcPlayerPtr PointerType;

    virtual ~VlcPlayer();

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::emptyCurrent) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::emptyCurrent) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::emptyCurrent) const;

    static const ::std::string& ice_staticId();

    virtual ::std::string play(const ::std::string&, const ::Ice::Current& = ::Ice::emptyCurrent) = 0;
    bool _iceD_play(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual bool _iceDispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:

    virtual void _iceWriteImpl(::Ice::OutputStream*) const;
    virtual void _iceReadImpl(::Ice::InputStream*);
};

inline bool operator==(const VlcPlayer& lhs, const VlcPlayer& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) == static_cast<const ::Ice::Object&>(rhs);
}

inline bool operator<(const VlcPlayer& lhs, const VlcPlayer& rhs)
{
    return static_cast<const ::Ice::Object&>(lhs) < static_cast<const ::Ice::Object&>(rhs);
}

}

namespace Ice
{

}

namespace Player
{

template<class T>
class CallbackNC_VlcPlayer_play : public Callback_VlcPlayer_play_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::std::string&);

    CallbackNC_VlcPlayer_play(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        ::Player::VlcPlayerPrx proxy = ::Player::VlcPlayerPrx::uncheckedCast(result->getProxy());
        ::std::string ret;
        try
        {
            ret = proxy->end_play(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::CallbackNC<T>::_callback.get()->*_response)(ret);
        }
    }

private:

    Response _response;
};

template<class T> Callback_VlcPlayer_playPtr
newCallback_VlcPlayer_play(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_VlcPlayer_play<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_VlcPlayer_playPtr
newCallback_VlcPlayer_play(T* instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_VlcPlayer_play<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_VlcPlayer_play : public Callback_VlcPlayer_play_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::std::string&, const CT&);

    Callback_VlcPlayer_play(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), _response(cb)
    {
    }

    virtual void completed(const ::Ice::AsyncResultPtr& result) const
    {
        ::Player::VlcPlayerPrx proxy = ::Player::VlcPlayerPrx::uncheckedCast(result->getProxy());
        ::std::string ret;
        try
        {
            ret = proxy->end_play(result);
        }
        catch(const ::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::exception(result, ex);
            return;
        }
        if(_response)
        {
            (::IceInternal::Callback<T, CT>::_callback.get()->*_response)(ret, CT::dynamicCast(result->getCookie()));
        }
    }

private:

    Response _response;
};

template<class T, typename CT> Callback_VlcPlayer_playPtr
newCallback_VlcPlayer_play(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_VlcPlayer_play<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_VlcPlayer_playPtr
newCallback_VlcPlayer_play(T* instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_VlcPlayer_play<T, CT>(instance, cb, excb, sentcb);
}

}

#endif

#include <IceUtil/PopDisableWarnings.h>
#endif
