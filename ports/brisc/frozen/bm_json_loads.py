import ujson as json
import sys


DICT = {
    'ads_flags': 0,
    'age': 18,
    'bulletin_count': 0,
    'comment_count': 0,
    'country': 'BR',
    'encrypted_id': 'G9urXXAJwjE',
    'favorite_count': 9,
    'first_name': '',
    'flags': 412317970704,
    'friend_count': 0,
    'gender': 'm',
    'gender_for_display': 'Male',
    'id': 302935349,
    'is_custom_profile_icon': 0,
    'last_name': '',
    'locale_preference': 'pt_BR',
    'member': 0,
    'tags': ['a', 'b', 'c', 'd', 'e', 'f', 'g'],
    'profile_foo_id': 827119638,
    'secure_encrypted_id': 'Z_xxx2dYx3t4YAdnmfgyKw',
    'session_number': 2,
    'signup_id': '201-19225-223',
    'status': 'A',
    'theme': 1,
    'time_created': 1225237014,
    'time_updated': 1233134493,
    'unread_message_count': 0,
    'user_group': '0',
    'username': 'collinwinter',
    'play_count': 9,
    'view_count': 7,
    'zip': ''}

TUPLE = (
    [265867233, 265868503, 265252341, 265243910, 265879514,
     266219766, 266021701, 265843726, 265592821, 265246784,
     265853180, 45526486, 265463699, 265848143, 265863062,
     265392591, 265877490, 265823665, 265828884, 265753032], 60)


def mutate_dict(orig_dict):
    new_dict = dict(orig_dict)
    index = 0
    for key, value in new_dict.items():
        if index % 2 == 0:
            index = index + 1
            new_dict[key] = 23985723485 + index
        else:
            index = index + 1
            continue
    return new_dict


DICT_GROUP = [mutate_dict(DICT) for _ in range(3)]


def bench_json_loads(objs):
    for obj in objs:
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)
        json.loads(obj)


json_dict = json.dumps(DICT)
json_tuple = json.dumps(TUPLE)
json_dict_group = json.dumps(DICT_GROUP)
objs = (json_dict, json_tuple, json_dict_group)
bench_json_loads(objs)
sys.exit(0)
