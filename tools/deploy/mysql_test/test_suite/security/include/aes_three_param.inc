select 1 as flag from dual where aes_encrypt('asdasdasdasd', '12312313123', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj') = aes_encrypt('asdasdasdasd', '12312313123', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj');
select hex(aes_encrypt('asdasdasdasd', '12312313123', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'))  from dual;
select hex(aes_encrypt('asdas123123dasdasd', '12312313123', '$$&$(*&(%*&(*%&($&*%&(dkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'))  from dual;
select hex(aes_encrypt('asdasdasdasd', '', '1290380129038129038012938'))  from dual;
select hex(aes_encrypt('', 'abc', '121903810293801289301298301982301928'))  from dual;
select hex(aes_encrypt('asdasdasdasd', 'asdasdas', '1230121231230381209380913820912830'))  from dual;
select aes_decrypt(aes_encrypt('asdasdasdasd', '', '1290380129038129038012938'), '','1290380129038129038012938')  from dual;
select aes_decrypt(aes_encrypt('', 'abc', '121903810293801289301298301982301928'), 'abc', '121903810293801289301298301982301928')  from dual;
select aes_decrypt(aes_encrypt('asdasdasdasd', 'asdasdas', '1230121231230381209380913820912830'),'asdasdas', '1230121231230381209380913820912830') from dual;
select hex(aes_encrypt('中文字符加一点', '你好', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'))  from dual;
select hex(aes_encrypt('测试', '是不是', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'))  from dual;
select hex(aes_encrypt('意义', '周三', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'))  from dual;
select hex(aes_encrypt('午后的天气还不错', '莎士比亚', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'))  from dual;
select aes_decrypt(aes_encrypt('中文字符加一点', '你好', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'), '你好', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj') from dual;
select aes_decrypt(aes_encrypt('测试', '是不是', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'),'是不是','asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj') from dual;
select aes_decrypt(aes_encrypt('意义', '周三', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'),'周三','asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj') from dual;
select aes_decrypt(aes_encrypt('午后的天气还不错', '莎士比亚', 'asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj'),'莎士比亚','asdasdkljasdkljalskdjaklsdjaklsjdaklsdjlaksdj') from dual;