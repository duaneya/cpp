    using Lst = list<T, allocator<T>>;

    //XCls<string, list> mylst1; // 符合模板参数，但是实际上不能这样写，错误, 必须要指定list模板第二个参数
    XCls<string, Lst> mylst2;