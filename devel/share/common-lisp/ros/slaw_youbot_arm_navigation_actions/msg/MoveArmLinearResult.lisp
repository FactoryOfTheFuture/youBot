; Auto-generated. Do not edit!


(cl:in-package slaw_youbot_arm_navigation_actions-msg)


;//! \htmlinclude MoveArmLinearResult.msg.html

(cl:defclass <MoveArmLinearResult> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (reason
    :reader reason
    :initarg :reason
    :type cl:string
    :initform ""))
)

(cl:defclass MoveArmLinearResult (<MoveArmLinearResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <MoveArmLinearResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'MoveArmLinearResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name slaw_youbot_arm_navigation_actions-msg:<MoveArmLinearResult> is deprecated: use slaw_youbot_arm_navigation_actions-msg:MoveArmLinearResult instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <MoveArmLinearResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader slaw_youbot_arm_navigation_actions-msg:success-val is deprecated.  Use slaw_youbot_arm_navigation_actions-msg:success instead.")
  (success m))

(cl:ensure-generic-function 'reason-val :lambda-list '(m))
(cl:defmethod reason-val ((m <MoveArmLinearResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader slaw_youbot_arm_navigation_actions-msg:reason-val is deprecated.  Use slaw_youbot_arm_navigation_actions-msg:reason instead.")
  (reason m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <MoveArmLinearResult>) ostream)
  "Serializes a message object of type '<MoveArmLinearResult>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'reason))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'reason))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <MoveArmLinearResult>) istream)
  "Deserializes a message object of type '<MoveArmLinearResult>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'reason) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'reason) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<MoveArmLinearResult>)))
  "Returns string type for a message object of type '<MoveArmLinearResult>"
  "slaw_youbot_arm_navigation_actions/MoveArmLinearResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'MoveArmLinearResult)))
  "Returns string type for a message object of type 'MoveArmLinearResult"
  "slaw_youbot_arm_navigation_actions/MoveArmLinearResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<MoveArmLinearResult>)))
  "Returns md5sum for a message object of type '<MoveArmLinearResult>"
  "a4d50a34d34f18de48e2436ff1472594")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'MoveArmLinearResult)))
  "Returns md5sum for a message object of type 'MoveArmLinearResult"
  "a4d50a34d34f18de48e2436ff1472594")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<MoveArmLinearResult>)))
  "Returns full string definition for message of type '<MoveArmLinearResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result~%bool success~%string reason~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'MoveArmLinearResult)))
  "Returns full string definition for message of type 'MoveArmLinearResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#result~%bool success~%string reason~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <MoveArmLinearResult>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'reason))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <MoveArmLinearResult>))
  "Converts a ROS message object to a list"
  (cl:list 'MoveArmLinearResult
    (cl:cons ':success (success msg))
    (cl:cons ':reason (reason msg))
))
