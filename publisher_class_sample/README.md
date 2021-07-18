
### publish method

```cpp
void publish<M>(const M &message) const
```

```cpp
void publish<M>(const boost::shared_ptr<M> &message) const
```
```cpp
void publish(const boost::function<ros::SerializedMessage ()> &serfunc, ros::SerializedMessage &m) const
```