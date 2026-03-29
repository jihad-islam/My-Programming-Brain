from django.http import HttpRequest, HttpResponse


def get_exam_result(request, student_id):
    database = {
        101: "passed",
        102: "failed",
    }

    try: 
        result = database.objects.get(id = student_id)
        return HttpResponse(result)
    except KeyError :
        return HttpResponse("404: student not found")