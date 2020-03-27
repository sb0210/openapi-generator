/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Pet.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Pet::Pet()
{
    m_Id = 0L;
    m_IdIsSet = false;
    m_CategoryIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_PhotoUrlsIsSet = false;
    m_TagsIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
}

Pet::~Pet()
{
}

void Pet::validate()
{
    // TODO: implement validation
}

web::json::value Pet::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_CategoryIsSet)
    {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(m_Category);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_PhotoUrlsIsSet)
    {
        val[utility::conversions::to_string_t("photoUrls")] = ModelBase::toJson(m_PhotoUrls);
    }
    if(m_TagsIsSet)
    {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(m_Tags);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }

    return val;
}

bool Pet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Category> refVal_category;
            ok &= ModelBase::fromJson(fieldValue, refVal_category);
            setCategory(refVal_category);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("photoUrls")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("photoUrls"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_photoUrls;
            ok &= ModelBase::fromJson(fieldValue, refVal_photoUrls);
            setPhotoUrls(refVal_photoUrls);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Tag>> refVal_tags;
            ok &= ModelBase::fromJson(fieldValue, refVal_tags);
            setTags(refVal_tags);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    return ok;
}

void Pet::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_CategoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("category"), m_Category));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_PhotoUrlsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("photoUrls"), m_PhotoUrls));
    }
    if(m_TagsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("tags"), m_Tags));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
}

bool Pet::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        int64_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("category")))
    {
        std::shared_ptr<Category> refVal_category;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("category")), refVal_category );
        setCategory(refVal_category);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("photoUrls")))
    {
        std::vector<utility::string_t> refVal_photoUrls;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("photoUrls")), refVal_photoUrls );
        setPhotoUrls(refVal_photoUrls);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("tags")))
    {
        std::vector<std::shared_ptr<Tag>> refVal_tags;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("tags")), refVal_tags );
        setTags(refVal_tags);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    return ok;
}

int64_t Pet::getId() const
{
    return m_Id;
}

void Pet::setId(int64_t value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Pet::idIsSet() const
{
    return m_IdIsSet;
}

void Pet::unsetId()
{
    m_IdIsSet = false;
}
std::shared_ptr<Category> Pet::getCategory() const
{
    return m_Category;
}

void Pet::setCategory(const std::shared_ptr<Category>& value)
{
    m_Category = value;
    m_CategoryIsSet = true;
}

bool Pet::categoryIsSet() const
{
    return m_CategoryIsSet;
}

void Pet::unsetCategory()
{
    m_CategoryIsSet = false;
}
utility::string_t Pet::getName() const
{
    return m_Name;
}

void Pet::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Pet::nameIsSet() const
{
    return m_NameIsSet;
}

void Pet::unsetName()
{
    m_NameIsSet = false;
}
std::vector<utility::string_t>& Pet::getPhotoUrls()
{
    return m_PhotoUrls;
}

void Pet::setPhotoUrls(const std::vector<utility::string_t>& value)
{
    m_PhotoUrls = value;
    m_PhotoUrlsIsSet = true;
}

bool Pet::photoUrlsIsSet() const
{
    return m_PhotoUrlsIsSet;
}

void Pet::unsetPhotoUrls()
{
    m_PhotoUrlsIsSet = false;
}
std::vector<std::shared_ptr<Tag>>& Pet::getTags()
{
    return m_Tags;
}

void Pet::setTags(const std::vector<std::shared_ptr<Tag>>& value)
{
    m_Tags = value;
    m_TagsIsSet = true;
}

bool Pet::tagsIsSet() const
{
    return m_TagsIsSet;
}

void Pet::unsetTags()
{
    m_TagsIsSet = false;
}
utility::string_t Pet::getStatus() const
{
    return m_Status;
}

void Pet::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Pet::statusIsSet() const
{
    return m_StatusIsSet;
}

void Pet::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


