// Generated by gencpp from file crazyswarm/LandResponse.msg
// DO NOT EDIT!


#ifndef CRAZYSWARM_MESSAGE_LANDRESPONSE_H
#define CRAZYSWARM_MESSAGE_LANDRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace crazyswarm
{
template <class ContainerAllocator>
struct LandResponse_
{
  typedef LandResponse_<ContainerAllocator> Type;

  LandResponse_()
    {
    }
  LandResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::crazyswarm::LandResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyswarm::LandResponse_<ContainerAllocator> const> ConstPtr;

}; // struct LandResponse_

typedef ::crazyswarm::LandResponse_<std::allocator<void> > LandResponse;

typedef boost::shared_ptr< ::crazyswarm::LandResponse > LandResponsePtr;
typedef boost::shared_ptr< ::crazyswarm::LandResponse const> LandResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyswarm::LandResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyswarm::LandResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace crazyswarm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::crazyswarm::LandResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyswarm::LandResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyswarm::LandResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyswarm::LandResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyswarm::LandResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyswarm::LandResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyswarm::LandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::crazyswarm::LandResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyswarm::LandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyswarm/LandResponse";
  }

  static const char* value(const ::crazyswarm::LandResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyswarm::LandResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::crazyswarm::LandResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyswarm::LandResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LandResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyswarm::LandResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::crazyswarm::LandResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYSWARM_MESSAGE_LANDRESPONSE_H
