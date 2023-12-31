// Generated by gencpp from file crazyswarm/SetGroupMaskRequest.msg
// DO NOT EDIT!


#ifndef CRAZYSWARM_MESSAGE_SETGROUPMASKREQUEST_H
#define CRAZYSWARM_MESSAGE_SETGROUPMASKREQUEST_H


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
struct SetGroupMaskRequest_
{
  typedef SetGroupMaskRequest_<ContainerAllocator> Type;

  SetGroupMaskRequest_()
    : groupMask(0)  {
    }
  SetGroupMaskRequest_(const ContainerAllocator& _alloc)
    : groupMask(0)  {
  (void)_alloc;
    }



   typedef uint8_t _groupMask_type;
  _groupMask_type groupMask;





  typedef boost::shared_ptr< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetGroupMaskRequest_

typedef ::crazyswarm::SetGroupMaskRequest_<std::allocator<void> > SetGroupMaskRequest;

typedef boost::shared_ptr< ::crazyswarm::SetGroupMaskRequest > SetGroupMaskRequestPtr;
typedef boost::shared_ptr< ::crazyswarm::SetGroupMaskRequest const> SetGroupMaskRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator1> & lhs, const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator2> & rhs)
{
  return lhs.groupMask == rhs.groupMask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator1> & lhs, const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace crazyswarm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d44d7e9aa94d069ed5834dbd7329e1bb";
  }

  static const char* value(const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd44d7e9aa94d069eULL;
  static const uint64_t static_value2 = 0xd5834dbd7329e1bbULL;
};

template<class ContainerAllocator>
struct DataType< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crazyswarm/SetGroupMaskRequest";
  }

  static const char* value(const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 groupMask\n"
;
  }

  static const char* value(const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.groupMask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetGroupMaskRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crazyswarm::SetGroupMaskRequest_<ContainerAllocator>& v)
  {
    s << indent << "groupMask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.groupMask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAZYSWARM_MESSAGE_SETGROUPMASKREQUEST_H
