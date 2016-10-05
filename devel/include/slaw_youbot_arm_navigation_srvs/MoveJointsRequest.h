// Generated by gencpp from file slaw_youbot_arm_navigation_srvs/MoveJointsRequest.msg
// DO NOT EDIT!


#ifndef SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEJOINTSREQUEST_H
#define SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEJOINTSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <slaw_youbot_arm_navigation_msgs/ArmConfiguration.h>

namespace slaw_youbot_arm_navigation_srvs
{
template <class ContainerAllocator>
struct MoveJointsRequest_
{
  typedef MoveJointsRequest_<ContainerAllocator> Type;

  MoveJointsRequest_()
    : configuration()
    , blocking(false)
    , velocity_controlled(false)
    , max_speed(0.0)  {
    }
  MoveJointsRequest_(const ContainerAllocator& _alloc)
    : configuration(_alloc)
    , blocking(false)
    , velocity_controlled(false)
    , max_speed(0.0)  {
  (void)_alloc;
    }



   typedef  ::slaw_youbot_arm_navigation_msgs::ArmConfiguration_<ContainerAllocator>  _configuration_type;
  _configuration_type configuration;

   typedef uint8_t _blocking_type;
  _blocking_type blocking;

   typedef uint8_t _velocity_controlled_type;
  _velocity_controlled_type velocity_controlled;

   typedef float _max_speed_type;
  _max_speed_type max_speed;




  typedef boost::shared_ptr< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveJointsRequest_

typedef ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<std::allocator<void> > MoveJointsRequest;

typedef boost::shared_ptr< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest > MoveJointsRequestPtr;
typedef boost::shared_ptr< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest const> MoveJointsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace slaw_youbot_arm_navigation_srvs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'slaw_youbot_arm_navigation_msgs': ['/home/ruud/youBot/src/slaw_youbot_arm_navigation/slaw_youbot_arm_navigation_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a2d91c2b039386c8d06637bd0408986";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a2d91c2b039386cULL;
  static const uint64_t static_value2 = 0x8d06637bd0408986ULL;
};

template<class ContainerAllocator>
struct DataType< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slaw_youbot_arm_navigation_srvs/MoveJointsRequest";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "slaw_youbot_arm_navigation_msgs/ArmConfiguration configuration\n\
bool blocking\n\
bool velocity_controlled\n\
float32 max_speed\n\
\n\
================================================================================\n\
MSG: slaw_youbot_arm_navigation_msgs/ArmConfiguration\n\
float32 arm_joint_1\n\
float32 arm_joint_2\n\
float32 arm_joint_3\n\
float32 arm_joint_4\n\
float32 arm_joint_5\n\
";
  }

  static const char* value(const ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.configuration);
      stream.next(m.blocking);
      stream.next(m.velocity_controlled);
      stream.next(m.max_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveJointsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::slaw_youbot_arm_navigation_srvs::MoveJointsRequest_<ContainerAllocator>& v)
  {
    s << indent << "configuration: ";
    s << std::endl;
    Printer< ::slaw_youbot_arm_navigation_msgs::ArmConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.configuration);
    s << indent << "blocking: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.blocking);
    s << indent << "velocity_controlled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.velocity_controlled);
    s << indent << "max_speed: ";
    Printer<float>::stream(s, indent + "  ", v.max_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SLAW_YOUBOT_ARM_NAVIGATION_SRVS_MESSAGE_MOVEJOINTSREQUEST_H
