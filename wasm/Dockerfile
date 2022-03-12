FROM emscripten/emsdk

ENV START /start

ADD ./start.sh $START/start.sh

RUN apt update && apt install -y ninja-build

WORKDIR $START

CMD ["sh", "/start/start.sh"]